// import 'dart:core'; //automatically imported
import 'dart:io';

void main(){
    print("Hello");

    var firstName = "Dangerous"; // type inference
    String lastName = "Khiladi"; // statically typed

    print(firstName+" "+lastName);

    String? middleName = stdin.readLineSync(); // nullable string

    print(firstName +" "+"$middleName"+" "+ lastName);



}
