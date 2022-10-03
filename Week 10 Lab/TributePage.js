
var indexSlide = 1;


    showSlides(indexSlide);
    function plusSlides(n) {
      showSlides((indexSlide += n));
    }
    function currentSlide(n) {
      showSlides((indexSlide = n));
    }

    function showSlides(n) {
      var i;
      var slides = document.getElementsByClassName("slides");
      var captionText = document.getElementById("caption");
      if (n > slides.length) {
        indexSlide = 1;
      }
      if (n < 1) {
        indexSlide = slides.length;
      }
      for (i = 0; i < slides.length; i++) {
        slides[i].style.display = "none";
      }
      slides[indexSlide - 1].style.display = "block";
}


