def main():
	anagram_checker("I sat there with Sally.", "Aha! Lithely twisters!")

def anagram_checker(a, b):
	n = only_alphabets_please(a)
	m = only_alphabets_please(b)
	if n == m:
		print("Anagrams!")
	else:
		print("Not anagrams.")

def only_alphabets_please(x):

	#convert the entire phrase/word to lower caps:
	x = x.lower()
	#turn all character into a list (this includes spaces):
	x = list(x)
	#delete all items which are not alphabets:
	x = [each_letter for each_letter in x if each_letter.isalpha()]
	#sort all the alphabets [b, a, c] becomes [a, b, c]:
	x = sorted(x)
	#join the letters [a, b, c] becomes "abc":
	x = "".join(x)
	
	return x

if __name__ == '__main__':
	main()