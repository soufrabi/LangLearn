/// Operators

void main(List<String> args) {
  int num = 10 + 20;

  num = num-2;
  print(num);

  num=num%5;
  print(num);

  //unary Operator
  ++num;
  num++;
  num +=2;
  num -=3;
  print(num);

  // relational == != >= 
  if (num==0){
    print("Zero");
  }
  else {
    print("Not Zero");
  }

  num = 100;
  num *= 2;
  print(num);

  // logical && and ||

  if(num > 200 && num<203){
    print("200 to 203");
  }

  if (num!=100){
    print("Not equal to 100");
  }

}
