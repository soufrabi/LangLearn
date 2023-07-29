# Theory

### Virtual Function vs Pure Virtual Function    

|| Virtual Function | Pure Virtual Function |
|-|---|---|
|| A virtual function is a member function of base class which can can be redefined by derived class.| A pure virtual function is a member function of base class whose only declaration is provided in base class and should be defined in derived class otherwise derived class also becomes abstract.|
|| Classes containing virtual functions are not abstract | Base containing pure virtual function becomes abstract |
|Syntax| virtual return_type function_name (argument list) {;} | virtual return_type function_name (argument_list)=0; |

