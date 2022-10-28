# Exception Handling

- _Two most common types of bugs:_
	1. Logic errors.
	2. Syntactic errors.


**Exceptions are run-time anomalies or unusual conditions that a program may encounter while executing.**


- _Exceptions are of two types:_
	1. Synchronous exceptions(e.g."out-of-range index", "over-flow").
	2. Asynchronous exceptions.


- _Mechanism of error handling:_
	1. Find the problem( _Hit the exception_ ).
	2. Inform that an error has occurred( _Throw the exception_ ).
	3. Receive the error information( _Catch the exception_ ).
	4. Take corrective actions( _Handle the exception_ ).


## Mechanism of exception handling

> This mechanism is built upon three _keywords_, **try**, **throw** and **catch**.

_The **try** block is used to detect an exception(basically by using `if-else` statements). If an exception is detected then it is thrown using the **throw** statement._

_A **catch** block catches the exception thrown by the **throw** statement in the **try** block, and it handles the exception appropriately._

> The **catch** block that catches an exception must immediately follow the **try** block that throws the exception!!

---
