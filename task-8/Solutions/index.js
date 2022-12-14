var numOfDrumButtons = document.querySelectorAll(".drum").length;

for (var i = 0; i < numOfDrumButtons; i++) {

  document.querySelectorAll(".drum")[i].addEventListener("click", function() {

    var buttonInnerHTML = this.innerHTML;

    makeSound(buttonInnerHTML);

    buttonAnime(buttonInnerHTML);

  });

}

document.addEventListener("keypress", function(event) {

  makeSound(event.key);

  buttonAnime(event.key);

});


function makeSound(key) {

  switch (key) {
    case "a":
      var sound1 = new Audio("sounds/tom-4.mp3");
      sound1.play();
      break;

    case "b":
      var sound2 = new Audio("sounds/tom-3.mp3");
      sound2.play();
      break;

    case "c":
      var sound3 = new Audio('sounds/tom-2.mp3');
      sound3.play();
      break;

    case "d":
      var sound4 = new Audio('sounds/tom-1.mp3');
      sound4.play();
      break;

    case "e":
      var sound5 = new Audio('sounds/crash.mp3');
      sound5.play();
      break;

    case "f":
      var sound6 = new Audio('sounds/snare.mp3');
      sound6.play();
      break;

    case "g":
      var sound7 = new Audio('sounds/kick-bass.mp3');
      sound7.play();
      break;


    default: console.log(key);

  }
}


function buttonAnime(currentKey) {

  var selectedButton = document.querySelector("." + currentKey);

  selectedButton.classList.add("pressed");

  setTimeout(function() {
    selectedButton.classList.remove("pressed");
  }, 100);

}
