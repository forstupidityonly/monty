# **monty: a bytecode interpeter**

## *Learning objectives*
* What do LIFO and FIFO mean
* What is a stack, and when to use it
* What is a queue, and when to use it
* What are the common implementations of stacks and queues
* What are the most common use cases of stacks and queues
* What is the proper way to use global variables

## *Description*

This C program will let you play with stacks using the monty scripting language. Stacks and other data structers like them such as queues are considered to have a limited access. For stacks this means that they work just like the airplane onboarding process Last In First Out. queues are more like lines with First In First Out.

## *What is the monty language?*

Monty 0.98 is a scripting language that is first compiled into Monty byte codes (Just like Python). It relies on a unique stack, with specific instructions to manipulate it. The goal of this project is to create an interpreter for Monty ByteCodes files. For more information see. https://freesoft.dev/program/114789087

## *setup*

git clone https://github.com/forstupidityonly/monty.git
gcc -Wall -Werror -Wextra -pedantic *.c -o monty

## *Usage*

$ cat bytecodes/00.m 
push 1
push 2
push 3
pall
swap
pall

julien@ubuntu:~/monty$ ./monty bytecodes/09.m 
3
2
1
2
3
1
julien@ubuntu:~/monty$ 

## *Authors*

Corbin VanDeventer