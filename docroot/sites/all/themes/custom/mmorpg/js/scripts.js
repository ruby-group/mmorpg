(function($) {
Drupal.behaviors.platforms = {
  attach: function (context, settings) {
    //code starts
   $(".play_now_platforms > ul > li, .promoted_play_now_platforms > ul > li").each(function(){
    var txt = $(this).text().replace(/ /g,'');
    $(this).addClass(txt.toLowerCase());
    
	});
    //code ends
  }
};

Drupal.behaviors.play_now = {
    attach: function (context, settings) {
        //code starts

        $('.page-play-now .play_now_body > p').each(function() {
            var $this = $(this);
            if($this.html().replace(/\s|&nbsp;/g, '').length == 0)
                $this.remove();
        });

        $(".page-play-now .play_now_body > p:first-child").append('<a id="play_now_body_more">Show More</a>');

        $( "#play_now_body_more" ).click(function() {
            $( ".page-play-now .play_now_body > p" ).toggle();
            $( this ).toggle();
        });

        //code ends
    }
};
})(jQuery);