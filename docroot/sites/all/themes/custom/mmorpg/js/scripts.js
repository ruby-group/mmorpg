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
            var $this = $( this );
            if($this.html().replace(/\s|&nbsp;/g, '').length == 0)
                $this.remove();
        });

        $(".page-play-now .play_now_body > p:first-child").append('<a class="play_now_body_more">Show More</a>');

        $( ".play_now_body_more" ).click(function() {
            $( this ).closest(".play_now_body").children('p').toggle();
            $( this ).toggle();
        });

        $(".page-play-now .views-widget-filter-title  input").attr("placeholder", "Type to filter play now list by title...");

        //code ends
    }
};

Drupal.behaviors.screenshots = {
    attach: function (context, settings) {
        //code starts
        $(".screenshot_hover.tid_378").html("<span>User Photo</span>");
        $(".screenshot_hover.tid_377").html("<span>Photo</span>");
        //code ends
    }
};
})(jQuery);