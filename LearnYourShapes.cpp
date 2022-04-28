/*
Learn Your Shapes
Pawelski
4/28/2022
Please follow the instructions on the activity sheet.
*/

#include <iostream>
#include <string>

/// <summary>
/// Draws a rectangle with the given height and width.
/// </summary>
/// <param name="height">Height (rows) of the rectangle.</param>
/// <param name="width">Width (columns) of the rectangle.</param>
void DrawRectangle(int height, int width)
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            std::cout << "# ";
        }
        std::cout << "\n";
    }
}

/// <summary>
/// Draws a right triangle. Width will be automatically calculated.
/// </summary>
/// <param name="height">Height (rows) of the right triangle.</param>
void DrawTriangle(int height)
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            std::cout << "# ";
        }
        std::cout << "\n";
    }
}

int main()
{
    std::string shape, repeat = "y";
    while (repeat == "y")
    {
        std::cout << "What shape would you like to see? "
            << "(square, rectangle, or triangle) >> ";
        std::cin >> shape;
        if (shape == "square")
        {
            int sideLength;
            std::cout << "Enter the side length of the square >> ";
            std::cin >> sideLength;
            DrawRectangle(sideLength, sideLength);
        }
        else if (shape == "rectangle")
        {
            int length, width;
            std::cout << "Enter the length of the rectangle >> ";
            std::cin >> length;
            std::cout << "Enter the width of the rectangle >> ";
            std::cin >> width;
            DrawRectangle(length, width);
        }
        else if (shape == "triangle")
        {
            int height;
            std::cout << "Enter the height of the triangle >> ";
            std::cin >> height;
            DrawTriangle(height);
        }
        else
        {
            std::cout << "Invalid shape. Please enter either square, rectangle, or triangle.\n";
        }
        std::cout << "Would you like to see another shape? (y/n) >> ";
        std::cin >> repeat;
        std::cout << "\n";
    }
    return 0;
}
