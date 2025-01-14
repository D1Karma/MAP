# imagine de baza pentru C++
FROM gcc:latest

# seteaza directorul de lucru in container
WORKDIR /app

# copiaza fisierele in container
COPY . .

# compileaza codul sursa
RUN g++ -o proiect main.cpp BinaryTree.cpp

# seteaza comanda implicita pentru rulare
CMD ["./proiect"]

