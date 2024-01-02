A MATCH-STICK GAME BETWEEN THE COMPUTER AND A USER.

Rules:
  There are 21 match-sticks.
  The computer asks the player to pick 1, 2, 3, or 4 match-sticks.
  After the person picks, the computer does its picking.
  Whoever is forced to pick up the last match-stick loses the game.

Explanation:
   In this given code, Function mainly used are Recursion and Structure.
   Recursion is a function in which function calls itself. And to terminate the function base case is required.
   Structures (also called structs) are a way to group of several related variables into one place.Each variable in the structure is known as a member of the structure. Unlike an array, a structure can contain many 
   different data types (int,float,char,etc.)
   In this given program, structure name match is created in which m is the structure variable.
   Integer ms, cpick, mpick has been declared in the structure.
   Int ms has assigned 21 values to it in the main function.
   Function name matchstick of return type void and with argument has been used.(Here argument passed in the function is int type and no. of matchsticks has been passed.)
   In Recursion function , base case is required to terminate recursion, here base case is created as when the no. of matchsticks is equal to 1 it terminates.i.e ms==1.
   Simple logic has been used in order to make the computer win.
   Computer’s choice would be in way such that it will always choose matchstick as 5- no. of matchstick choosen by the user.
   Unless a single matchstick is left, matchstick function will call itself by taking argument as no. of matchsticks left.

