# Use lightweight base image with g++ compiler
FROM gcc:latest

# Set the working directory in the container
WORKDIR /app

# Copy the C++ source file to the container
COPY main.cpp .

# Compile the C++ program
RUN g++ -o hello main.cpp

# Run the compiled C++ program
CMD ["./hello"]
