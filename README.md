# Data Structure Visualizer

Data Structure Visualizer is a C-based project that allows users to interact with and visualize different data structures such as Linked Lists, Binary Search Trees, Graphs, and Heaps. The project provides a menu-driven interface to create and manipulate these data structures, as well as visualize their current state.

## Features

- **Linked List**: Create and add nodes to a linked list. Visualize the linked list after each operation.
- **Binary Search Tree**: Create and add nodes to a binary search tree. Visualize the tree in in-order traversal after each operation.
- **Graph**: Create a graph with a specified number of vertices and edges. Visualize the adjacency matrix of the graph.
- **Heap**: Create a heap with a specified capacity and insert elements. Visualize the heap after each insertion.

## How to Run

1. Clone the repository:
    ```sh
    git clone https://github.com/yourusername/data-structure-visualizer.git
    ```

2. Navigate to the project directory:
    ```sh
    cd data-structure-visualizer
    ```

3. Compile the project:
    ```sh
    gcc main.c linkedlist.c bst.c graph.c heap.c -o data_structure_visualizer
    ```

4. Run the executable:
    ```sh
    ./data_structure_visualizer
    ```

## Usage

The program starts with a menu that allows you to choose which data structure to work with:
- Enter the number corresponding to the data structure you want to create or manipulate.
- Follow the prompts to add data and visualize the structure.

## File Structure

- `main.c`: Contains the main function and the menu interface.
- `linkedlist.c`, `linkedlist.h`: Implementation and definitions for the linked list.
- `bst.c`, `bst.h`: Implementation and definitions for the binary search tree.
- `graph.c`, `graph.h`: Implementation and definitions for the graph.
- `heap.c`, `heap.h`: Implementation and definitions for the heap.

## Contributing

Contributions are welcome! If you have suggestions for improvements or new features, feel free to create an issue or submit a pull request.

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.
