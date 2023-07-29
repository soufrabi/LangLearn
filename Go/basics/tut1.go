package main


import (
    "fmt"
)


func main(){

    var x int 

    fmt.Println(x)
    if x>0 {
        fmt.Println("the number is smaller than 3 ")
    }
    // else {
    //     fmt.Println("")

    // }


    

    a := []int{5,4,3,13}
    a = append(a, 34)
    fmt.Println(a)

    vertices := make(map[string]int)

    vertices["hello"] = 23;
    vertices["dark"] = 34;

    fmt.Println(vertices)



    


}
