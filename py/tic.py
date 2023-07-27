from random import randrange

def display_board(board):
    a = "1"
    b = "2"
    c = "3"

    for i in range(3):
        for j in range(3):
            board[i][j] = i * 3 + j + 1

    for i in range(3):
        row = "+-------+-------+-------+"
        column = "|       |       |       |"
        column_middle = "|" + "   " + a + "   " + "|" + "   " + b + "   " + "|" + "   " + c + "   " + "|"
        if b == "X":
            b = 5
        print(row)
        print(column)
        print(column_middle)
        print(column)
        a = int(a) + 3
        b = int(b) + 3
        c = int(c) + 3
        if b == 5:
            b = "X"
        a = str(a)
        b = str(b)
        c = str(c)
        
    else:
        print(row)

    return board

def enter_move(board):
    move = input("Your move: ")
    if move == 1

# def make_list_of_free_fields(board):

# def victory_for(board, sign):

# def draw_move(board):

board = [[0 for i in range(3)] for i in range(3)]
display_board(board)
# for i in range(3):
#     print(board[i], "\n")
