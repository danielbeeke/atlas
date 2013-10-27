(function ($) {

  Atlast.behaviors.pages = {
    attach: function (settings) {

      $('#menu a.page').once().click(function () {
        var combiner = require('combiner')

        combiner.hideMenu()

        var pages = JSON.parse(localStorage.getItem('pages'));

        combiner.showPlate({
          fullscreen: true,
          id: pages[$(this).attr('data-id')].id,
          title: pages[$(this).attr('data-id')].title,
          content: pages[$(this).attr('data-id')].content,
        })

      });

    }
  };

})(jQuery);
