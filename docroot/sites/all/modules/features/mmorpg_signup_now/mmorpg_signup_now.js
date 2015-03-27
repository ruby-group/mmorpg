var date = new Date();
var minute = date.getMinutes();
$(".view-promoted-signup-now-link .view-content .tier").each(function(index,element) {
  var tierLimits = $(element).find("div .views-field-field-tiers-max-links-to-display .field-content").html();
  var rows = $(element).find(".views-row");
  var rowsArray = $.map(rows, function (value, index) {
    return value;
  });
  rotateCount = Math.floor(minute / 5);
  for (i = 0; i < rotateCount; i++) {
    var temp = rowsArray.shift();
    rowsArray.push(temp);
  };
  var displayRows = rowsArray.slice(0, tierLimits);
  $(element).html(displayRows);
});
