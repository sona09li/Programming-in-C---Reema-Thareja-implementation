

## How for loop works 
 ```c
 // lets say i am printing 1 to 10 using for loop
 for(i=0; i<=10; i=i*2){
     // statements
 }
 ````

i=0; i >10 ??? , i=i+1 
  // executes statements inside the loop
i=1; i > 10 ??? : False; then > i = i+1
.
.
.
i=10 i>10 ???; True; 
  // No Internal statements gets executed, loop overs or loop completes

**Important points to note**
  - lets say if i give this loop N, then the loop would run logN times

## Cases where i found looop iterates infinitely

```c
// When there is not condition to break
for(int i=0;true;i++); <== This loop infinitely
````
