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
})(jQuery);