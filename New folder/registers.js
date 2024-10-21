function data() {
    var a = document.getElementById("id1").value;
    var b = document.getElementById("id2").value;
    var c = document.getElementById("id3").value;
    var d = document.getElementById("id4").value;

  if (a=="" || b=="" || c==""  || d==""){
    alert("All feild are mandatory");
    return false;
  }
  else if (!a.includes('@')) {
    alert("username not found");
    return false;
  }
  else if (b.length<10 || b.length>10 ){
    alert("please enter a valid number");
    return false;
  }
  else if (isNaN(b)){
    alert("only numbers are allowed");
    return false;
  } 
  else if (c!=d){
    alert("password did not match, enter the same password");
    return false;
  }
  else{
    return true;
  }
}




