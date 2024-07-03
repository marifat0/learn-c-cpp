# Define variables
CC = cc
CFLAGS = -I '/usr/local/include'
LDFLAGS = -L '/usr/local/lib'
LIBS = -lmicrohttpd

# Define the target executable
TARGET = build/hellobrowser
SRCS = hellobrowser.c
OBJS = $(SRCS:.c=.o)
BUILD_DIR = build

# Default rule
all: $(BUILD_DIR) $(TARGET)

# Rule to create the build directory
$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

# Rule to build the target executable
$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $@ $(LDFLAGS) $(LIBS)

# Rule to build object files
%.o: %.c
	$(CC) -c $< -o $@ $(CFLAGS)

# Clean up build files
clean:
	rm -f $(OBJS) $(TARGET)

# Phony targets
.PHONY: all clean

