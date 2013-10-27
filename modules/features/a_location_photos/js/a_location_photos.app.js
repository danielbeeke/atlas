(function ($) {

  Atlast.behaviors.photos = {
    attach: function (settings) {

      var combiner = require('combiner')

      $('body').on('plate_new_content', function (event, plate, location) {

        if ($('.swiper-container', plate).length) {
          new Swiper('.swiper-container', {
            speed:750,
            mode:'horizontal',
            grabCursor: true,
            slidesPerView: 'auto',
            resistance: false,
            preventLinks: true
          })
        }

        $('.swiper-image', plate).once().click(function () {
            var photo = location.plugins.photos[$(this).attr('data-id')]

            var singlePhoto = twigloader.get('photo', {
              photo: photo.large,
              title: photo.title,
            })

            combiner.showPlate({
              id: 'photo-' + photo.id,
              content: singlePhoto,
              title: photo.title
            })
        });

      })

    }
  };

})(jQuery);
