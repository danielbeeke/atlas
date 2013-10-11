(function ($) {

  Atlast.behaviors.photos = {
    attach: function (settings) {

      $('body').on('plate_new_content', function (event, location) {

        if ($('.swiper-container').length) {
          new Swiper('.swiper-container', {
            speed:750,
            mode:'horizontal',
            grabCursor: true,
            slidesPerView: 'auto',
            resistance: false
          })
        }

      })

      $(document).on('hide.bs.plate', function () {

      })


    }
  };

})(jQuery);
