import random
from time import sleep

if __name__ == "__main__":
	player1 = 0
	player2 = 0
	player1wins = 0
	player2wins = 0
	print("How many rounds do you want to play?")
	rounds = int(input())
	current_round = 1
	while(current_round <= rounds):
		sleep(1)
		print("\nRound : " + str(current_round))
		player1 = random.randint(1,6)
		player2 = random.randint(1,6)
		print("Player 1 : " + str(player1))
		print("Player 2 : " + str(player2))
		if(player1>player2):
			print("Player 1 wins")
			player1wins+=1
		elif(player1<player2):
			print("Player 2 wins")
			player2wins+=1
		else:
			print("Draw!")
		current_round +=1

	if(player1wins>player2wins):
		print("\nPlayer 1 have won with " + str(player1wins) + " rounds")
	elif(player2wins>player1wins):
		print("\nPlayer 2 have won with " + str(player2wins) + " rounds")
	else:
		print("\nBoth Player 1 and Player 2 have drawn the match with" + str(player1wins) + " rounds")
		
