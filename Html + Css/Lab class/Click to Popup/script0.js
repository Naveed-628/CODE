$(document).ready(function () {
  $(".button").on("click", function () {
    if ($(".popup").hasClass("active")) {
      $(".popup").removeClass("active");
    } else {
      $(".popup").addClass("active");
    }
  });
});
