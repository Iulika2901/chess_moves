<!DOCTYPE html>
<html lang="en">
<head>
<meta charset="UTF-8">
<meta name="viewport" content="width=device-width, initial-scale=1.0">
<title>Chess Board Initialization and Encoding</title>
</head>
<body>

<h1>Chess Board Initialization and Encoding</h1>

<p>This repository contains a C program that provides functions for initializing a chess board, printing the board, finding pieces on the board, encoding the board state into FEN (Forsyth-Edwards Notation), and decoding FEN notation back into a board state.</p>

<h2>Description</h2>

<ul>
  <li><strong>init():</strong> Initializes a 2D array representing the chess board. Places the pieces in their initial positions according to standard chess rules.</li>
  <li><strong>print():</strong> Prints the current state of the chess board to the console. Displays the board with pieces represented by their respective characters.</li>
  <li><strong>find():</strong> Searches the chess board for a specific piece and returns the column and row indices of all instances of that piece.</li>
  <li><strong>encode():</strong> Converts the current state of the chess board into FEN notation, which is a standard notation for describing the position of pieces on a chess board.</li>
  <li><strong>decode():</strong> Converts FEN notation back into a board state, allowing you to reconstruct the chess board from a FEN string.</li>
</ul>

<h2>Applications</h2>

<ul>
  <li><strong>Chess Game Development:</strong> These functions can be used as a foundation for developing chess-related applications, such as chess engines, chess puzzles, or chess GUIs.</li>
  <li><strong>Chess Notation Conversion:</strong> The encoding and decoding functions allow for easy conversion between different chess notation formats, facilitating communication and analysis of chess games.</li>
</ul>

<h2>Future Improvements</h2>

<ul>
  <li><strong>Support for Castling and En Passant:</strong> Enhance the program to handle castling and en passant moves, which are special rules in chess.</li>
  <li><strong>Graphical User Interface (GUI):</strong> Develop a graphical user interface to visualize the chess board and interact with it using mouse clicks.</li>
  <li><strong>Optimization for Performance:</strong> Optimize the code for better performance, especially for large chess boards or time-sensitive applications.</li>
</ul>
<p>WCode write in C:</p>
<img src="https://github.com/Iulika2901/chess_moves/assets/84437252/2273e381-182f-43d5-9045-1fe060bc2de1">
<h2>Chess Images</h2>

<pThis can help you:</p>

<img src="https://upload.wikimedia.org/wikipedia/commons/thumb/2/2c/AAA_SVG_Chessboard_and_chess_pieces_02.svg/768px-AAA_SVG_Chessboard_and_chess_pieces_02.svg.png?20200505220000" alt="Chess Table">


</body>
</html>
