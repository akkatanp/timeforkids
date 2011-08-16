/**
 * @file
 * Override actions in contrib/flashcard/flashcard_cycle/js/flashcard_cycle.js
 * for custom css3d animations for time for kids
 */

(function ($) {
  Drupal.behaviors.flashcardCycleCustom = {

    attach: function (context, settings) {
      var cycleSpeed = settings.flashcardCycle.speed;      
      $('.flashcard-cycle').each(
        function() {
          var counts = {
            all : 0,
            marked : 0,
            unmarked : 0
          }
          var detached;
          var modeChecked = 'all';
          var current = 1;
          var card = $(this).find('.flashcard-cycle-cards')
            .unbind('click')
            .click(
              function() {
                if ( $('html').hasClass('csstransforms3d') ) {
                  if ( $(this).hasClass('showing') ) {
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
                  if ( $(this).hasClass('showing') ) {
                    $(this)
                      .find('.flashcard-cycle-card .card-front').removeAttr('style').end()
                      .find('.flashcard-cycle-card .card-back').removeAttr('style').end();
                  }
                  else {
                    $(this)
                      .find('.flashcard-cycle-card:visible .card-back')
                        .show()
                        .end()
                      .find('.flashcard-cycle-card:visible .card-front')
                        .hide()
                        .end();
                  }
                  if ( $(this).hasClass('showing') ) {
                    
                    current = cardNumber('next', current, counts[modeChecked]);
                    $(this).cycle('next');
                  }
                }
                $(this).toggleClass('showing');
              }
            );
            
          counts.all = counts.unmarked = card.children().size();
          
          $(this)
            .find('.flip')
              .unbind('click')
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
                        .find('.flashcard-cycle-card .card-front').removeAttr('style').end()
                        .find('.flashcard-cycle-card .card-back').removeAttr('style').end();
                    }
                    else {
                      card
                        .find('.flashcard-cycle-card:visible .card-back')
                          .show()
                          .end()
                        .find('.flashcard-cycle-card:visible .card-front')
                          .hide()
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
            .find('.shuffle')
              .unbind('click')
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
            .find('.next, .prev')
              .unbind('click')
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
                    if (card.hasClass('showing')) {
                      card
                        .find('.flashcard-cycle-card .card-front').removeAttr('style').end()
                        .find('.flashcard-cycle-card .card-back').removeAttr('style').end();
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
                  if (settings.flashcardCycle.button) {
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
              .unbind('click')
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
                    marked.removeAttr('disabled');
                  }
                  else if (!marked.attr('disabled')){
                    marked.attr('disabled', 'disabled');
                  }

                  unmarked = $('.flashcard-cycle-mode input[value="unmarked"]');
                  if (counts.unmarked == 0) {
                    unmarked.attr('disabled', 'disabled');
                  }
                  else if (unmarked.attr('disabled')) {
                    unmarked.removeAttr('disabled');
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
                    $(this).attr('disabled', 'disabled');
                  }
                }
              )
              .unbind('click')
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
      
      
      // function copied wholesale from line 237 of contrib/flashcard/flashcard_cycle/js/flashcard_cycle.js
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
        
        $('.flashcard-numbering').html(Drupal.t('!current of !total', {'!current': '<span class="flashcard-numbering-current">' + current + '</span>', '!total': total}));
        return current;
      }
      // Use the hotkeys jquery library for better cross-browser keyboard controls.
      if (settings.flashcardCycle.keyboard) {
        $('body').unbind('keydown');
        $(document).bind('keydown', 'space', function() {
          $('.flip').click();
          return false;
        });
        $(document).bind('keydown', 'right', function() {
          $('.next').click();
          return false;
        });
        $(document).bind('keydown', 'left', function() {
          $('.prev').click();
          return false;
        });
      }
    }
  }
}(jQuery));
