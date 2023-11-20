$(document).ready(function () {
  $(".openPopup").click(function () {
    $(".popup").fadeIn();
  });

  $(".closePopup").click(function () {
    $(".popup").fadeOut();
    pauseVideo();
  });

  function pauseVideo() {
    var video = $(".popup video")[0];
    video.pause();
  }
});
