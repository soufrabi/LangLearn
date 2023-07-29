# File Handling


let's discuss the functionalities of the tellg(), seekg(), and read() functions:

tellg(): This function is used to get the current position of the get pointer (the read position) within a file stream. It returns an object of type streampos, which represents the position in the stream. The syntax is as follows:


```
streampos tellg();
```
seekg(): This function is used to set the position of the get pointer within a file stream. It takes two arguments: an object of type streampos or streamoff (which represents an offset from a particular position in the stream), and a value of type ios_base::seekdir (which specifies the direction from the reference point where the offset is applied). The syntax is as follows:



```
istream& seekg(streampos pos);
istream& seekg(streamoff off, ios_base::seekdir way);
```
read(): This function is used to read a specified number of bytes from a file stream and store them in a buffer. It takes two arguments: a pointer to a buffer where the data will be stored, and the number of bytes to read. The syntax is as follows:


```
istream& read(char* s, streamsize n);
```
Note that these functions are typically used for input file streams (ifstream), not output file streams (ofstream).
