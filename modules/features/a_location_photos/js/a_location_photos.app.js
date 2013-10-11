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
            resistance: false,
            preventLinks: true
          })
        }

        $('.swiper-image').once().click(function () {
            var that = this;

            $('#photo').remove()

            var singlePhoto = twigloader.get('photo', {
              photo: $(that).attr('data-large'),
              title: $(that).attr('title'),
            })

            if ($(that).attr('title')) {
              var title = $(that).attr('title')
            }
            else {
              var title = 'No title';
            }

            var photoModal = twigloader.get('modal', {
              id: 'photo',
              content: singlePhoto,
              title: title
            })

            $('body').append(photoModal)

            $('#photo').modal('show')

        });

      })

    }
  };

})(jQuery);
