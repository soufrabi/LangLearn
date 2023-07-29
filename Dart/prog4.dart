/// Type conversion : Everything is an object

void main(List<String> args) {
 
    // String -> int

    var one = int.parse("1");
    assert(one == 1); // shows error if not equal

    // String -> Double

    var onePointOne = double.parse('1.1');
    assert(onePointOne == 1.1);

    // int to String

    var oneAsString = 1.toString();
    print(oneAsString);

    // double to String

    var piAsString =3.1414.toString();
    print(piAsString);

    // specify precision

    piAsString = 3.1415.toStringAsFixed(2);
    print(piAsString);




}
