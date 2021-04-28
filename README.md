## Multi File Complie
When You wanna compile test1.cpp, test2.cpp (for example, both files refer test.h)</br>

```
g++ -c test1.cpp // create object file test1.o
g++ -c test2.cpp // create object file test2.o
g++ test1.o test2.o // create a.out(compiled execution file)
```

Generally, Class Definition is defined in .h file.


### References
http://marupeke296.com/IKDADV_PI_CPP2.html
