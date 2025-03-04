#include <iostream>

 
 Sequence Structure
/*-----------------+
|     Entry        |
+------------------+
         |
         V
+------------------+
|    Action 1      |
+------------------+
         |
         V
+------------------+
|    Action 2      |
+------------------+
         |
         V
+------------------+
|      Exit        |
+------------------+*/

// ________________________________________________________________________________________________________________________________________________________________

      Selection  Structures
    /* +------------------+
       |      Start       |
       +------------------+
                |
                V
     +------------------+
     |   Condition?     |
     +------------------+
            /     \
           /       \
      True         False
         /           \
        V             V
  +---------+   +---------+
  | Action 1|   |Action 2 |
  +---------+   +---------+
           \       /
            \     /
             \   /
              V V
       +------------------+
       |       End        |
       +------------------*/


________________________________________________________________________________________________________________________________________________________________
 Loop Structure
/*----------------+
|     Start       |  <-- Program begins
+-----------------+
        |
        v
+-----------------+
|   Initialize    |  <-- Set up variables, conditions, etc.
+-----------------+
        |
        v
+-----------------+
| while (Cond)    |  <-- Loop starts: Check if condition is true
+-----------------+
        |
        |
        v
+-----------------+
| Check Condition |<<<<<<<<<<<<<<<<<<<<
+-----------------+                    ^
        |                              ^
        |                          +---------+
        |                          | Action 1|
    ____|____                      +---------+
   |         |                         ^
   V         V                         ^
+-----+   +------+                     ^            
|False|   | True |>>>>>>>>>>>>>>>>>>>>>
+-----+   +------+    
   |         
   |         
   | 
   v 
+---------------+
| Action 2      |  <-- A2: Code executed after the loop ends
+---------------+      
   |         
   |         
   | 
   v   
+-----------------+
|     End         |  <-- Program ends
+-----------------*/

