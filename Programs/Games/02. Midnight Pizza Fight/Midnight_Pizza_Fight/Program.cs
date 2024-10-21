using System;

namespace Midnight_Pizza_Fight
{
    class Program
    {
        static void Main(string[] args)
        {
            Game game = new Game();
            game.DisplayGameStory();
            game.SpawnCharacters();
        }
    }
}