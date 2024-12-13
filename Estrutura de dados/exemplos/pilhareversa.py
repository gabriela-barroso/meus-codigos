1	class Stack:
2	     def __init__(self):
3	         self.items = []
4	
5	     def isEmpty(self):
6	         return self.items == []
7	
8	     def push(self, item):
9	         self.items.insert(0,item)
10	
11	     def pop(self):
12	         return self.items.pop(0)
13	
14	     def peek(self):
15	         return self.items[0]
16	
17	     def size(self):
18	         return len(self.items