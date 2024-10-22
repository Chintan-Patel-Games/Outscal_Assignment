using System;

namespace Midnight_Pizza_Fight
{
    public class Game
    {
        bool isGameExited = false;
        Player player;
        Enemy enemy;

        public void GameLoop()
        {
            while (!isGameExited)
            {
                DisplayGameStory();
                StartMenu();
                if (!isGameExited)
                    RestartMenu();
            }
        }

        private void DisplayGameStory()
        {
            Console.Clear();
            Console.WriteLine("\n==================================================");
            Console.WriteLine("            🍕 MIDNIGHT PIZZA FIGHT 🍕           ");
            Console.WriteLine("==================================================");
            Console.WriteLine("\nIn a bustling pizzeria on a busy Friday night...");
            Console.WriteLine("--------------------------------------------------");
            Console.WriteLine("You, the Dough Master, created your magnum opus -");
            Console.WriteLine("the perfect pizza🤌  Suddenly, a sneaky Crust Bandit");
            Console.WriteLine("snatches your masterpiece!");
            Console.WriteLine("--------------------------------------------------");
            Console.WriteLine("\nFueled by passion for your craft, you give chase...");
            Console.WriteLine("--------------------------------------------------");
            Console.WriteLine("Through winding alleys and crowded streets, you");
            Console.WriteLine("pursue the pizza pilferer. Finally, the thief is");
            Console.WriteLine("cornered in a dead-end alley. It's time to recover");
            Console.WriteLine("your stolen slice!");
            Console.WriteLine("--------------------------------------------------");
            Console.WriteLine("                      FIGHT!");
        }

        private void StartMenu()
        {
            Console.WriteLine("==================================================");
            Console.WriteLine("     Press S to Get Your Masterpiece BACK...     ");
            Console.WriteLine("     Press any other key to exit the game   ");
            Console.WriteLine("==================================================");

            ProcessStartMenuInput();
        }

        private void ProcessStartMenuInput()
        {
            string startGame = GetInput();

            if (startGame == "S")
            {
                Console.Clear();
                SpawnCharacters();
                ProcessBattleLoop();
            }
            else
            {
                ExitGame();
            }
        }

        private string GetInput()
        {
            string? input = Console.ReadLine();
            return input.ToUpper();
        }

        private void SpawnCharacters()
        {
            //Initialize Player and Enemy object 
            player = new Player();
            enemy = new Enemy();
        }

        private void ProcessBattleLoop()
        {
            do
            {
                ShowBattleOptions();
                ProcessBattleInput();
            } while (AreCharactersAlive());
        }

        private bool AreCharactersAlive() => player.Health > 0 && enemy.Health > 0;

        private void ShowBattleOptions()
        {
            Console.WriteLine("\n==================================================");
            Console.WriteLine("             🍕 PIZZA BATTLE OPTIONS 🍕             ");
            Console.WriteLine("==================================================");
            Console.WriteLine("  Choose your action:");
            Console.WriteLine("    [A] Attack the Crust Bandit 🥊");
            Console.WriteLine("    [H] Gulp an Espresso Shot ☕");
            Console.WriteLine("==================================================");
            Console.Write("  Your choice: ");
        }

        private void ProcessBattleInput()
        {
            string playerChoice = GetInput();
            Console.Clear();

            switch (playerChoice)
            {
                case "A":
                    //Player's Turn
                    PlayerAttack();

                    if (CheckGameOver())
                        break;
                    //Enemy's Turn
                    EnemyAttack();

                    if (CheckGameOver())
                        break;

                    DisplayCharacterStats();
                    break;

                case "H":
                    //Player's Turn
                    PlayerHeal();
                    //Enemy's Turn
                    EnemyAttack();

                    if (CheckGameOver())
                        break;

                    DisplayCharacterStats();
                    break;

                default:
                    InvalidInput();
                    break;
            }
        }

        private void PlayerAttack()
        {
            int totalDamage = player.CalculateTotalDamage();
            enemy.TakeDamage(totalDamage);
            player.ShowAttackDamage(totalDamage);
        }

        private void EnemyAttack()
        {
            int totalDamage = enemy.CalculateTotalDamage();
            player.TakeDamage(totalDamage);
            enemy.ShowAttackDamage(totalDamage);
        }

        private bool CheckGameOver()
        {
            if (enemy.Health <= 0)
            {
                ShowGameWin();
                return true;
            }
            if (player.Health <= 0)
            {
                ShowGameLose();
                return true;
            }
            return false;
        }

        private void ShowGameWin()
        {
            Console.Clear();
            Console.WriteLine("\n==================================================");
            Console.WriteLine("           🎉 PIZZA JUSTICE SERVED! 🎉              ");
            Console.WriteLine("==================================================");
            Console.WriteLine("The Dough Master has defeated the Crust Bandit!");
            Console.WriteLine("--------------------------------------------------");
            Console.WriteLine("The perfect pizza has been reclaimed 🍕           ");
            Console.WriteLine("The honor of Italian cuisine is restored!         ");
            Console.WriteLine("--------------------------------------------------");
            Console.WriteLine("    Bon appétit, and thanks for playing! 👨‍🍳        ");
            Console.WriteLine("==================================================");
        }

        private void ShowGameLose()
        {
            Console.Clear();
            Console.WriteLine("\n==================================================");
            Console.WriteLine("              😭 PIZZA TRAGEDY! 😭                ");
            Console.WriteLine("==================================================");
            Console.WriteLine("The Dough Master has been outmaneuvered!           ");
            Console.WriteLine("--------------------------------------------------");
            Console.WriteLine("The Crust Bandit escapes with your masterpiece 🏃‍♂️");
            Console.WriteLine("Your pizzeria's reputation is in shambles 📉     ");
            Console.WriteLine("--------------------------------------------------");
            Console.WriteLine("        Thanks for your valiant effort! 🎖️         ");
            Console.WriteLine("   Perhaps it's time to switch to calzones... 🥟   ");
            Console.WriteLine("==================================================");
        }

        private void DisplayCharacterStats()
        {
            player.DisplayPlayerStats();
            enemy.DisplayEnemyStats();
        }

        private void InvalidInput() => Console.WriteLine("Invalid Input! , please give a valid input");

        private void PlayerHeal()
        {
            int totalHeal = player.CalculateTotalHeal();
            player.Heal(totalHeal);
            player.ShowHeal(totalHeal);
        }

        private void ExitGame()
        {
            Console.Clear();
            Console.WriteLine("Thanks for playing Midnight Pizza Fight!😄");
            isGameExited = true;
        }

        private void RestartMenu()
        {
            Console.WriteLine("\n==================================================");
            Console.WriteLine("     Press R to Restart...     ");
            Console.WriteLine("     Press any other key to exit the game   ");
            Console.WriteLine("==================================================");

            ProcessRestartMenuInput();
        }

        private void ProcessRestartMenuInput()
        {
            string restartGame = GetInput();

            if (restartGame == "R")
            {
                isGameExited = false;
            }
            else
            {
                ExitGame();
            }
        }
    }
}