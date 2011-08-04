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
          var current = 1;

          var card = $(this).find('.flashcard-cycle-cards')
            .cycle()
            .cycle('pause')
            .click(
              function() {
                if ( $('html').hasClass('csstransforms3d') ) {
                  if (card.hasClass('showing') && Drupal.settings.flashcardCycle.flip == 'next') {
                    card
                      .find('.flashcard-cycle-card:visible .card-back')
                        .bind('webkitTransitionEnd oTransitionEnd transitionEnd', function() {
                          $(this).unbind('webkitTransitionEnd').unbind('oTransitionEnd').unbind('transitionEnd');
                          current = cardNumber('next', current, counts[modeChecked]);
                          card.cycle('next');
                        });
                  }
                } 
                else {
                  if ( card.hasClass('showing') ) {
                    card
                      .find('.flashcard-cycle-card:visible .card-front')
                        .show()
                        .end()
                      .find('.flashcard-cycle-card:visible .card-back')
                        .hide()
                        .end();
                  }
                  else {
                    card
                      .find('.flashcard-cycle-card:visible .card-front')
                        .hide()
                        .end()
                      .find('.flashcard-cycle-card:visible .card-back')
                        .show()
                        .end();
                  }
                  if (card.hasClass('showing') && Drupal.settings.flashcardCycle.flip == 'next') {
                    current = cardNumber('next', current, counts[modeChecked]);
                    card.cycle('next');
                  }
                }
                card.toggleClass('showing');
              }
              // function() {
              //   $(this)
              //     .find('.flashcard-cycle-card:visible ul.answer')
              //       .toggle(cycleSpeed)
              //     .end();
              //   if ($(this).hasClass('showing')) {
              //     $(this).cycle('next');
              //     current = cardNumber('next', current, counts[modeChecked]);
              //   }
              //   $(this).toggleClass('showing');
              // }
            );

          counts.all = counts.unmarked = card.children().size();

          $(this)
            .find('ul.answer')
              .hide()
            .end()

            .find('.flashcard-cycle-toolbar')
              .prepend('<a class="shuffle">Shuffle</a>')
              .prepend('<div class="flashcard-numbering"></div>')
                .each(
                  function() {
                    cardNumber('restart', current, counts[modeChecked]);
                  }
                )
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
                    current = cardNumber('restart', current, counts[modeChecked]);
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
                    current = cardNumber('restart', current, counts[modeChecked]);
                }
              )
            .end()

            .find('.flip')
              .click(
                function() {
                  if ( $('html').hasClass('csstransforms3d') ) {
                    if (card.hasClass('showing') && Drupal.settings.flashcardCycle.flip == 'next') {
                      card
                        .find('.flashcard-cycle-card:visible .card-back')
                          .bind('webkitTransitionEnd oTransitionEnd transitionEnd', function() {
                            $(this).unbind('webkitTransitionEnd').unbind('oTransitionEnd').unbind('transitionEnd');
                            current = cardNumber('next', current, counts[modeChecked]);
                            card.cycle('next');
                          });
                    }
                  } 
                  else {
                    if ( card.hasClass('showing') ) {
                      card
                        .find('.flashcard-cycle-card:visible .card-front')
                          .show()
                          .end()
                        .find('.flashcard-cycle-card:visible .card-back')
                          .hide()
                          .end();
                    }
                    else {
                      card
                        .find('.flashcard-cycle-card:visible .card-front')
                          .hide()
                          .end()
                        .find('.flashcard-cycle-card:visible .card-back')
                          .show()
                          .end();
                    }
                    if (card.hasClass('showing') && Drupal.settings.flashcardCycle.flip == 'next') {
                      current = cardNumber('next', current, counts[modeChecked]);
                      card.cycle('next');
                    }
                  }
                  card.toggleClass('showing');
                }
              )
            .end()

            .find('.next, .prev')
              .click(
                function() {
                  if ( $('html').hasClass('csstransforms3d') ) {
                    $thisButton = $(this);
                    if (card.hasClass('showing')) {
                      card
                        .removeClass('showing')
                        .find('.flashcard-cycle-card:visible .card-back')
                          .bind('webkitTransitionEnd', function() {
                            $(this).unbind('webkitTransitionEnd').unbind('oTransitionEnd').unbind('transitionEnd');
                            card
                              .cycle($thisButton.attr('class').split(/\b/)[0])
                            current = cardNumber($thisButton.attr('class').split(/\b/)[0], current, counts[modeChecked]);
                          });
                    } 
                    else {
                      card
                        .cycle($thisButton.attr('class').split(/\b/)[0])
                      current = cardNumber($thisButton.attr('class').split(/\b/)[0], current, counts[modeChecked]);
                    }
                  }
                  else {
                    if ( card.hasClass('showing') ) {
                      card
                        .find('.flashcard-cycle-card:visible .card-front')
                          .show()
                          .end()
                        .find('.flashcard-cycle-card:visible .card-back')
                          .hide()
                          .end();
                    }
                    card
                      .cycle($(this).attr('class').split(/\b/)[0])
                      .removeClass('showing');
                    current = cardNumber($(this).attr('class').split(/\b/)[0], current, counts[modeChecked]);
                  }
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
                    marked.attr('disabled', false);
                  }
                  else if (!marked.attr('disabled')){
                    marked.attr('disabled', true);
                  }

                  unmarked = $('.flashcard-cycle-mode input[value="unmarked"]');
                  if (counts.unmarked == 0) {
                    unmarked.attr('disabled', true);
                  }
                  else if (unmarked.attr('disabled')) {
                    unmarked.attr('disabled', false);
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
                    $(this).attr('disabled', true);
                  }
                }
              )
              .click(
                function() {
                  value = $(this).attr('value');
                  if (value != modeChecked) {
                    modeChecked = value;
                    current = cardNumber('restart', current, counts[modeChecked]);
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
      
      function cardNumber(type, current, total) {
        if (type == 'next') {
          current++;
          if (current > total) {
            current = 1;
          }
        }
        if (type == 'prev') {
          current--;
          if (current < 1) {
            current = total;
          }
        }
        if (type == 'restart') {
          current = 1;
        }
        
        $(".flashcard-numbering").html(Drupal.t('!current of !total', {'!current': '<span class="flashcard-numbering-current">' + current + '</span>', '!total': total}));
        return current;
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
