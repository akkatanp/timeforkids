/**
 * @file
 * Override actions in contrib/flashcard/flashcard_cycle/js/flashcard_cycle.js
 * for custom css3d animations for time for kids
 */

(function ($) {
  Drupal.behaviors.flashcardCycleCustom = {
    attach: function (context, settings) {
      
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
                      .find('.flashcard-cycle-card:visible .card-front')
                        .show()
                        .end()
                      .find('.flashcard-cycle-card:visible .card-back')
                        .hide()
                        .end();
                  }
                  else {
                    $(this)
                      .find('.flashcard-cycle-card:visible .card-front')
                        .hide()
                        .end()
                      .find('.flashcard-cycle-card:visible .card-back')
                        .show()
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
        }
      );
      
      
      // function copied from line 237 of contrib/flashcard/flashcard_cycle/js/flashcard_cycle.js
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
      
    }
  }
}(jQuery));