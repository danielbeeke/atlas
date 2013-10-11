(function ($) {

  Atlast.behaviors.pages = {
    attach: function (settings) {

      $('#menu a.page').once().click(function () {
        var that = this;
        $('#menu').modal('hide')

        $('#plate').plate('hide').remove()

        var pages = JSON.parse(localStorage.getItem('pages'));

        $('body').append(twigloader.get('plate', {
          title: pages[$(that).attr('data-id')].title,
          content: pages[$(that).attr('data-id')].content,
        }))

        $('#plate').plate('show')
      });

    }
  };

})(jQuery);
