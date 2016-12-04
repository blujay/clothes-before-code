using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class TextController : MonoBehaviour {

	// Use this for initialization
	
	public Text text;
	
	//f indicates 'full', e indicates 'empty'
	private enum States {	bedroom_0, bedroom_1, bedroom_2,
							drack_f_0, drack_f_1, drack_f_2, drack_f_3, drack_f_4, drack_f_5, drack_f_6, 
							drack_e_0, drack_e_1, drack_e_2, drack_e_3,
							wmachine_f_0, wmachine_f_1, wmachine_f_2, wmachine_f_3,
							wmachine_e_0, wmachine_e_1, wmachine_e_2, wmachine_e_3, wmachine_e_4, wmachine_e_5,
							laundry_f_0, laundry_f_1, laundry_f_2, laundry_f_3,
							laundry_e_0, laundry_e_1,
							bucket_0, bucket_1
						};
						
	private States myState;
	
	void Start () {
		myState = States.bedroom_0;
	}
	
	// Update is called once per frame
	void Update () {
		print(myState);
		//bedroom
		if		(myState == States.bedroom_0)		{bedroom_0			();}
		else if	(myState == States.bedroom_1)		{bedroom_1			();}
		else if	(myState == States.bedroom_2)		{bedroom_2			();}
		// drying rack full
		else if	(myState == States.drack_f_0)		{drack_f_0			();}
		else if	(myState == States.drack_f_1)		{drack_f_1			();}
		else if	(myState == States.drack_f_2)		{drack_f_2			();}
		else if	(myState == States.drack_f_3)		{drack_f_3			();}
		else if	(myState == States.drack_f_4)		{drack_f_4			();}
		// drying rack empty
		else if	(myState == States.drack_e_0)		{drack_e_0			();}
		else if	(myState == States.drack_e_1)		{drack_e_1			();}
		else if	(myState == States.drack_e_2)		{drack_e_2			();}
		else if	(myState == States.drack_e_3)		{drack_e_3			();}
		// washing machine full
		else if (myState == States.wmachine_f_0)	{wmachine_f_0		();}
		else if (myState == States.wmachine_f_1)	{wmachine_f_1		();}
		else if (myState == States.wmachine_f_2)	{wmachine_f_2		();}
		else if (myState == States.wmachine_f_3)	{wmachine_f_3		();}
		// washing machine empty
		else if (myState == States.wmachine_e_0)	{wmachine_e_0		();}
		else if (myState == States.wmachine_e_1)	{wmachine_e_1		();}
		else if (myState == States.wmachine_e_2)	{wmachine_e_2		();}
		else if (myState == States.wmachine_e_3)	{wmachine_e_3		();}
		// laundry basket full
		else if (myState == States.laundry_f_0)		{laundry_f_0		();}
		else if (myState == States.laundry_f_1)		{laundry_f_1		();}
		else if (myState == States.laundry_f_2)		{laundry_f_2		();}
		else if (myState == States.laundry_f_3)		{laundry_f_3		();}
		// laundry basket empty
		else if (myState == States.laundry_e_0)		{laundry_e_0		();}
		else if (myState == States.laundry_e_1)		{laundry_e_1		();}
		// bucket
		else if	(myState == States.bucket_0)		{bucket_0			();}
		else if	(myState == States.bucket_1)		{bucket_1			();}
		}
	
	void bedroom_0 (){
		text.text = "It’s Sunday 11am and you are in bed. You have been learning to code Unity games in C#. " +
					"You can hear the hum and thump of a washing machine in it’s last spin cycle." +
					"The drying rack is full of clothes.  \n\nYou'll have to take care of the laundry before you can carry on coding any more games.\n\n" +

					"Press D to view drying rack, L to go to view laundry basket, W to go to washing machine";
		
		if(Input.GetKeyDown(KeyCode.D))					{myState=States.drack_f_0;}
		else if(Input.GetKeyDown(KeyCode.L))			{myState=States.laundry_f_0;}
		else if(Input.GetKeyDown(KeyCode.W))			{myState=States.wmachine_f_0;}
	}
	
	void bedroom_1 (){
		text.text = "You are halfway there. I know you want to go back to bed and code but you have more to do\n\n" +
					"Press D to view drying rack, L to go to view laundry basket, W to go to washing machine";
		
		if(Input.GetKeyDown(KeyCode.D))					{myState=States.drack_f_4;}
		else if(Input.GetKeyDown(KeyCode.L))			{myState=States.laundry_f_3;}
		else if(Input.GetKeyDown(KeyCode.W))			{myState=States.wmachine_e_1;}
	}
	
	void bedroom_2 (){
		text.text = "Finally! You're done. You climb back into bed - smelling the fresh scent of fabric softener which makes you feel cosy and happy. " +
					"You'd love to carry on coding but it's nearly lunch time and the kids are hungry - you doze for a few minutes... maybe next Sunday.\n\n"+
					"Press P to play again";
		
		if(Input.GetKeyDown(KeyCode.P))					{myState=States.bedroom_0;}
	}
	
	void drack_f_0 (){
		text.text = "The old fashioned drying rack hangs from the ceiling and is full of dry clothes ready to fold and put away." +
					"This is your least favourite job... You sigh as you look up at that. You notice an empty bucket by your feet\n\n" +
					
					"Press B to look at the bucket, F to fold clothes, R to return to bedroom";
		if(Input.GetKeyDown(KeyCode.B))			{myState=States.bucket_0;}
		else if(Input.GetKeyDown(KeyCode.F))	{myState=States.drack_e_0;}
		else if(Input.GetKeyDown(KeyCode.R))	{myState=States.bedroom_0;}
	}
	
	void drack_f_1 (){
		text.text = "You take the bucket and glance up at the full rack again with a sinking heart - you HATE sorting socks. You'll need to fold it at some point. You decide to do it later...\n\n" +
					
					"Press L to go to laundry basket and see how much there is.";
		if(Input.GetKeyDown(KeyCode.L))			{myState=States.laundry_f_1;}
		//might be worth adding a fold clothes option here and allow player to use bucket to put the in.
	}
	
	void drack_f_2 (){
		text.text = "The drying rack is still full of laundry (no elves came to help you). You think it might be better to just fold them while you wait for washing machine to finish.\n\n" +
					
					"Press F to fold clothes";
		if(Input.GetKeyDown(KeyCode.F))			{myState=States.drack_e_3;}
	}
	
	void drack_f_3 (){
		text.text = "Those pesky socks are a pain to hang up but you finished. Time to go back to bed and carry on coding our adventure?\n\n" +
					
					"Press R to return to bed and carry on coding";
		if(Input.GetKeyDown(KeyCode.R))			{myState=States.bedroom_1;}
	}
	
	void drack_f_4 (){
		text.text = "You did a great job here. You're going out later so better get the new load in the washing machine so that you can hang them up when you get home.\n\n" +
					
					"Press L to go to laundry basket, Press R to return to bed";
		if(Input.GetKeyDown(KeyCode.L))			{myState=States.laundry_f_3;}
		else if(Input.GetKeyDown(KeyCode.R))	{myState=States.bedroom_1;}
	}
	
	void drack_e_0 (){
		text.text = "You bite the bullet and decide to fold the clothes. You carefully remove them from the drying rack and " +
					"resisting the temptation to chuck them in the bucket and forget about it, you fold them in a giant pile on the bed\n\n" +
					
					"Press W to go and check if the washing machine has finished yet, Press B to view bucket";
		if(Input.GetKeyDown(KeyCode.W))			{myState=States.wmachine_f_0;}
		else if(Input.GetKeyDown(KeyCode.B))	{myState=States.bucket_1;}	
	}
	
	void drack_e_1 (){
		text.text = "Happy bucket - It's quite big (and you're not) so it waddles alongside you as you walk - bumping into your calves. " +
					"Maybe the washing machine has finished now?\n\n" +
					"Press W to go and check the washing machine";
		if(Input.GetKeyDown(KeyCode.W))			{myState=States.wmachine_f_1;}
	}
	
	void drack_e_2 (){
		text.text = "The drying rack is empty now. That's a relief. Time to hang it up to dry\n\n" +
					"Press H to hang wet clothes on drying rack";
		if(Input.GetKeyDown(KeyCode.H))			{myState=States.drack_f_3;}
	}
	
	void drack_e_3 (){
		text.text = "Taking a deep sigh, you remove the clothes from the drying rack (You'd like to rip them all off quickly and hide them... " +
					"but instead you fold them in a giant pile on the bed. " +
					"You can hear the bleeping of the washing machine. You need to empty the bucket before fetching the wet washing\n\n" +
					"Press L to put dirty clothes back in laundry basket";
		if(Input.GetKeyDown(KeyCode.L))			{myState=States.laundry_f_2;}
	}
	
	void laundry_f_0 (){
		text.text = "The laundry basket is heaving. You need to wash some of these and something to carry them in\n\n" +
					"Press R to return to bedroom";	
		if	(Input.GetKeyDown(KeyCode.R))		{myState=States.bedroom_0;}
	}
	
	void laundry_f_1 (){
		text.text = "The laundry basket is heaving! dusty work clothes, muddy school clothes, pants and random socks everywhere. " +
					"You've got an empty bucket so you could maybe fill it ready for next wash?. \n\n" +
					"Press F to fill the bucket with dirty laundry or D to return to drying rack";	
		if	(Input.GetKeyDown(KeyCode.D))		{myState=States.drack_f_1;}
		else if(Input.GetKeyDown(KeyCode.F))	{myState=States.laundry_e_0;}
	}
	
	void laundry_f_2 (){
		text.text = "You tip the bucket of dirty clothes back in the laundry basket. Ghhrrr!! that was a waste of time!.\n\n" +
					"Press W to return to washing machine with empty bucket";	
		if	(Input.GetKeyDown(KeyCode.W))		{myState=States.wmachine_f_1;}
	}
	
	void laundry_f_3 (){
		text.text = "The laundry basket is heaving - dusty work clothes, muddy school clothes, pants and random socks everywhere. You're bucket is empty. Is this a good time to fill up with dirty clothes?\n\n" +
					"Press F to fill bucket with dirty clothes, press R to return to bedroom";	
		if	(Input.GetKeyDown(KeyCode.F))		{myState=States.laundry_e_1;}
		else if(Input.GetKeyDown(KeyCode.R))	{myState=States.bedroom_1;}
	}
	
	void laundry_e_0 (){
		text.text = "You fill the bucket with a selection of dirty clothes - trying to find pairs of socks to wash together - they are your nemesis!. You dig around at the bottom of the basket to find them all\n\n" +
					"Press W to go to washing machine, D to return to drying rack";	
		if	(Input.GetKeyDown(KeyCode.W))		{myState=States.wmachine_f_2;}
		else if(Input.GetKeyDown(KeyCode.D))	{myState=States.drack_f_2;}
	}
	
	void laundry_e_1 (){
		text.text = "Your bucket is now full - actually quite overflowing. You hope it will all fit inside the old washing machine!\n\n" +
					"Press W to go to washing machine";	
		if	(Input.GetKeyDown(KeyCode.W))		{myState=States.wmachine_e_3;}
	}
	
	void wmachine_f_0 (){
		text.text = "The washing machine is in it's final spin cycle. You'll need to come back a bit later with something to carry the wet washing in\n\n" +
					"Press R to return to bedroom";	
		if(Input.GetKeyDown(KeyCode.R))			{myState=States.bedroom_0;}
	}
	
	void wmachine_f_1 (){
		text.text = "The washing machine is deathly silent now. A shadow of it's former rumbling self - like an old man asleep. \n\n" +
					"Press F to unload the washing machine";	
		if(Input.GetKeyDown(KeyCode.F))			{myState=States.wmachine_e_0;}
	}
	
	void wmachine_f_2 (){
		text.text = "The washing machine is still on it's spin cycle. It's one of those old second hand ones you bought when you moved in. " +
					"It thunders and shakes on the laminate flooring. Why don't you go back and unload the drying rack while you wait? \n\n" +
					"Press D to return to drying rack";	
		
		if (Input.GetKeyDown(KeyCode.D))		{myState=States.drack_f_2;}
	}
	
	void wmachine_f_3 (){
		text.text = "You fill up the washing machine checking pockets for loose change, sweet wrappers and tissues. " +
					"You put in the detergent and softener and start the programme. The old machine starts to hiss and splutter. Is that it now? are we done?\n\n" +
					"Press R to leave the bucket and return to the Bedroom";	
		if(Input.GetKeyDown(KeyCode.R))			{myState=States.bedroom_2;}
	}
	
	void wmachine_e_0 (){
		text.text = "Good job - you managed to pull out that half broken tissue that has gone over everything. Uggh - how did we miss that!\n\n" +
					"Press D to return to the drying rack to hang the laundry";	
		if(Input.GetKeyDown(KeyCode.D))			{myState=States.drack_f_3;}
	}
	
	void wmachine_e_1 (){
		text.text = "The washing machine is empty. You're bucket is also empty! You'll need something to put in the machine\n\n" +
					"Press L to go to laundry basket and R to return to the bedroom";	
		if(Input.GetKeyDown(KeyCode.L))			{myState=States.laundry_f_3;}
		else if(Input.GetKeyDown(KeyCode.R))	{myState=States.bedroom_1;}
	}
	
	void wmachine_e_2 (){
		text.text = "The washing machine is empty. You're bucket is also empty! You can fill up from the laundry basket\n\n" +
					"Press L to return to the laundry basket ";	
		if(Input.GetKeyDown(KeyCode.L))			{myState=States.laundry_f_3;}
	}
	
	void wmachine_e_3 (){
		text.text = "The washing machine is still, quiet and very empty. You have a full bucket of dirty clothes with you. Time to put them in the old washing machine\n\n" +
					"Press F to fill up the washing machine";	
		if(Input.GetKeyDown(KeyCode.F))			{myState=States.wmachine_f_3;}
	}
	
	void bucket_0 (){
		text.text = "The bucket is baby blue (it was on offer). It's one of those strong flexy plastic ones " +
					"with big handles that wouldn't look out of place on a building site (If builders like baby blue). It's empty! \n\n" +
					"Press T to take the bucket, press D to return to drying rack";	
		if (Input.GetKeyDown(KeyCode.T))			{myState=States.drack_f_1;}
		else if (Input.GetKeyDown(KeyCode.D))		{myState=States.drack_f_0;}
	}
	
	void bucket_1 (){
		text.text = "The empty bucket sits there looking expectant. It's big baby blue handles give it the impression of a dog waiting to be taken for a walk. \n\n" +
					"Press T to make a happy bucket by taking it with you, press D to return attention to the drying rack";	
		if (Input.GetKeyDown(KeyCode.T))			{myState=States.drack_e_1;}
		else if (Input.GetKeyDown(KeyCode.D))		{myState=States.drack_f_0;}
	}
	
}