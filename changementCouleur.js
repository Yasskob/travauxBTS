document.getElementById("test").onmouseover = function () { mouseOver() };
document.getElementById("test").onmouseout = function () { mouseOut() };

function mouseOver() {
  document.getElementById("test").src="logoON.PNG";
}

function mouseOut() {
  document.getElementById("test").src="logoOFF.png";
}



function myFunction() {
  document.getElementById("demo").innerHTML = "le text a changer";
}

function myFunction2() {
  document.getElementById("demo").innerHTML = "changer le text";
}







function verifierFrmulaire() {
  var name = document.forms["RegForm"]["Nom"];
  var email = document.forms["RegForm"]["Email"];
  var newslettre = document.forms["RegForm"]["newslettre"];
  if (name.value == "") {
    alert("Mettez votre nom.");
    name.focus();
    return false;
  }
  if (email.value == "")                                   
  { 
      alert("Mettez une adresse email valide."); 
      email.focus(); 
      return false; 
  }       
  if (newslettre.value == "")                                   
  { 
      alert("Cocher newslettre"); 
      newslettre.focus(); 
      return false; 
  }    
  return true;
}