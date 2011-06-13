/**
 * @file
 * Glue code for the jquery.cycle plugin.
 */

(function ($) {
  Drupal.behaviors.flashcardCycle = {
    attach: function (context, settings) {
      var cycleSpeed = Drupal.settings.flashcardCycle.speed;

      $.fn.cycle.defaults.before = clearMarked;
      $.fn.cycle.defaults.speed = cycleSpeed;
      $.fn.cycle.defaults.fit = true;
      $.fn.cycle.defaults.fx = Drupal.settings.flashcardCycle.fx;

      $('.flashcard-cycle').each(
        function() {

          var detached;
          var modeChecked = 'all';
          var counts = {
            all : 0,
            marked : 0,
            unmarked : 0
          }

          var card = $(this).find('.flashcard-cycle-cards')
            .cycle()
            .cycle('pause')
            .click(
              function() {
                $(this)
                  .find('.flashcard-cycle-card:visible ul.answer')
                    .toggle(cycleSpeed)
                  .end();
                if ($(this).hasClass('showing')) {
                  $(this).cycle('next');
                }
                $(this).toggleClass('showing');
              }
            );

          counts.all = counts.unmarked = card.children().size();

          $(this)
            .find('ul.answer')
              .hide()
            .end()

            .find('.flashcard-cycle-toolbar')
              .prepend('<a class="shuffle">Shuffle</a>')
            .end()

            .find('.flashcard-cycle-buttons')
              .wrapInner('<div class="flashcard-cycle-wrapper clearfix"></div>')
              .find('a')
                .each(
                  function() {
                    if ($(this).attr('class').length > 0) {
                      $(this).attr('href', '#' + $(this).attr('class').split(/\b/)[0]);
                    }
                  }
                )
              .end()
              .each(
                function() {
                  if (Drupal.settings.flashcardCycle.button) {
                    $(this).buttonset();
                  }
                }
              )
            .end()

            .find('.restart')
              .click(
                function() {
                  card
                    .removeClass('showing')
                    .find('ul.answer')
                      .hide(cycleSpeed)
                    .end()
                    .cycle(0);
                }
              )
            .end()

            .find('.shuffle')
              .click(
                function() {
                  card
                    .removeClass('showing')
                    .find('ul.answer')
                      .hide(cycleSpeed)
                    .end()
                    .cycle({random: true})
                    .cycle('pause');
                }
              )
            .end()

            .find('.flip')
              .click(
                function() {
                  card
                    .find('.flashcard-cycle-card:visible ul.answer')
                      .toggle(cycleSpeed)
                    .end();
                  if (card.hasClass('showing') && Drupal.settings.flashcardCycle.flip == 'next') {
                    card.cycle('next')
                  }
                  card.toggleClass('showing');
                }
              )
            .end()

            .find('.next, .prev')
              .click(
                function() {
                  card
                    .cycle($(this).attr('class').split(/\b/)[0])
                    .removeClass('showing');
                }
              )
              .each(
                function() {
                  if (Drupal.settings.flashcardCycle.button) {
                    $(this)
                      .button({
                        text: false,
                        icons: {
                          primary: 'ui-icon-circle-triangle-' + (($(this).attr('class').split(/\b/)[0] === 'prev') ? 'w' : 'e')
                        }
                      });
                  }
                }
              )
            .end()

            .find('.flashcard-cycle-mark input')
              .click(
                function() {
                  if ($(this).attr('checked')) {
                    counts.marked++;
                    counts.unmarked--;
                  }
                  else {
                    counts.marked--;
                    counts.unmarked++;
                  }

                  marked = $('.flashcard-cycle-mode input[value="marked"]');
                  if (counts.marked > 0) {
                    marked.button('enable');
                  }
                  else if (!marked.attr('disabled')){
                    marked.button('disable');
                  }

                  unmarked = $('.flashcard-cycle-mode input[value="unmarked"]');
                  if (counts.unmarked == 0) {
                    unmarked.button('disable');
                  }
                  else if (unmarked.attr('disabled')) {
                    unmarked.button('enable');
                  }

                  card
                    .find('.flashcard-cycle-card:visible')
                      .toggleClass('marked');
                }
              )
            .end()

            .find('.flashcard-cycle-mode input')
              .each(
                function() {
                  if ($(this).attr('value') == 'marked') {
                    $(this).button('disable');
                  }
                }
              )
              .click(
                function() {
                  value = $(this).attr('value');
                  if (value != modeChecked) {
                    modeChecked = value;
                    if (detached) {
                      detached.appendTo(card);
                      detached = null;
                    }
                    switch (value) {
                      case 'marked':
                        detached = $('.flashcard-cycle-card:not(.marked)').detach();
                        break;
                      case 'unmarked':
                        detached = $('.flashcard-cycle-card.marked').detach();
                        break;
                    }
                    card
                      .cycle('destroy')
                      .cycle()
                      .cycle('pause');
                  }
                }
              )
            .end();
        }
      );

      function clearMarked(curr, next) {
        if ($(next).hasClass('marked')) {
          $('.flashcard-cycle-mark input').attr('checked', 'checked');
        }
        else {
          $('.flashcard-cycle-mark input').removeAttr('checked');
        }
        $(curr)
          .find('ul.answer')
            .hide(cycleSpeed)
          .end();
      }

      if (Drupal.settings.flashcardCycle.keyboard) {
        $('body').keydown(
          function(e) {
            if (e.which == 32) {
              $('.flip').click();
              return false;
            }
            if (e.which == 37) {
              $('.prev').click();
            }
            if (e.which == 39) {
              $('.next').click();
            }
          }
        );
      }
    }
  }
}(jQuery));
