# Use an official GCC image to build and run the C program
FROM gcc:latest

# Set the working directory in the container
WORKDIR /usr/src/app

# Copy the main.c file into the container
COPY main.c .

# Build the C program
RUN gcc -o main main.c

# Run the program to ensure it works
CMD ["sh", "-c", "./main && echo 'All tests passed!'"]
