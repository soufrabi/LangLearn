/// String 

void main(List<String> args) {
 
    var s1 = 'Single quotes work';
    var s2 = "Double quotes work";
    var s3 = 'It\'s easy to escape string delimiter';
    var s4 = "It's even easier to use the other delimiter";

    print(s1);
    print(s2);
    print(s3);
    print(s4);

    // Raw string
    var s = r'In a raw string not even \n gets special treatment';
    print(s);

    // Replace

    var x= 31;

    var str1 = "My age is $x";
    var str2 = "My age is $x";
    print(str1);
    print(str2);


    // Multiline string

    var ms1 = '''
        You can create multiline strings
        Like this
            ''';

    var ms2 = """
        This is an alternative way
        of writing multiline strings
            """;

    print(ms1);
    print(ms2);
}
