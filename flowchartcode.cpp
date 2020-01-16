START;
ls = ADC_Conversion(1);
cs = ADC_Conversion(2);
rs = ADC_Conversion(3);
ps = ADC_Conversion(4);
int bot_direction = down; 
current_node = 2;
adjacent arr[];//for BFS
floor_array[5]as 0,1,1,0,1;
house_total_requierment[5] as 2,1,2,2,2;
make a map for CMs with thier node values and serial.no(values which will pe passed while taking input)
which_material[9] will be taken;
sort the houses in revrse order;
for(house;house<total_house;next_house){
  add node values(graph numbers) of CM(to pick it) and add house own graph no. after each CM(to place it);
initialize the array as node array for all houses,constructing materials and  nodes by assiging each a graph number;
i.e as in question no.H we will get node_array as 4,10,17,23,9,23,6,31,24,31,14,13,7,13,27,20,16,20;
}
forward_line_following {
		if (check_for track) {
			Move forward();
			if (is_on_current_node) { isBotOnNode ; }
		}
		else if (check_for ls == 255 and rs == 0 and cs == 255) {
			Move soft left();
			if (is_on_current_node ) { isBotOnNode; }

		}
		else if (check_for ls == 255 and rs == 0 and cs == 0) {
			Move soft left();
			if (is_on_current_node) { isBotOnNode; }
		}
		else if (check_for ls == 0 and rs == 255 and cs == 255) {
			Move soft right();
			if (is_on_current_node) { isBotOnNode ; }

		}
		else if (check_for ls == 0 and rs == 255 and cs == 0) {
			Move soft right();
			if (is_on_current_node) { is_Bot_OnNode ; }
		}
		else if (check_for ls == 255 and rs == 255 and cs == 255) {
			isBotOnNode;
		}
		else if (check_for ls == 0 and rs == 0 and cs == 0) {
			is_on_current_node;
			isBotOnNode ;
		}
		if (isBotOnNode and is_on_current_node) { increment_of_node_count; is_on_current_node ; }
		if (node_count == node) { stop and break }
}
applying_breadth_first_search{
  initialize_the_queue_ ;
  mark current_nodes visited and en-queue into queue ;
  while (Queue is non-empty ){
    de-queue the head of queue;
    mark and push unvisited adjacent node of current node;}
}
make_bot_cross_node {
		forward();
		if (check_for ls == 0 && cs == 255 && rs == 0) { break; }
		else if (check_for ls == 255 && rs == 0 && cs == 255) {
			Move soft left();
		}
		else if (check_for ls == 255 && rs == 0 && cs == 0) {
			Move soft left();
		}
		else if (check_for ls == 0 && rs == 255 && cs == 255) {
			Move soft right();

		}
		else if (check_for ls == 0 && rs == 255 && cs == 0) {
			Move soft right();
		}
	}

go_to_distination_node(int source, int distination) {
//direction:next bot direction
//this is to assign specific direction on each node
	for (for_all_nodes_move_in_following_pattern; current node < max node; incremeant of current node by one) {
		if (is_next_node_greater_than_current_node) { direction = up; }
		else if (is_next_node_less_than_current_node { direction = down; }
		else if (is_next_node_just_the_next_one) { direction = right; }
		else if (is_next_node_just_the_previous_one) { direction = left; }
		Updatae_bot_direction_to_new_direction
			bot_direction = direction;
		}
}
		if (check_for_if_nodes_are_between_walls) {
			take proximity_sensor reading move between the walls;
		}
		else if (check_for_if_nodes_are_between_zig_zag_path) {
			follow zigZag path;
		}
		else if (check_for_if_bot_entered_white_line) {
			follow whiteLine;
		}
		else {
			if (check that is node crossed) { cross_node(); }
			move forward following line by one node;

		}
		check that is node crossed;
	current node = destination node;
initiate Performing Task_1.2() {
  node array;
	forward_line_following only for one node;

	for (pick or placed = 0;count(counting number of pick and place)is less than total number of picking&placing;incremeant in count by two) {
		Executing Pick and Place;
		//With the help of passing following parameters (node array[count], node array[count + 1], current_node)
	}
}
turn_180_for_last_node
{
//This is only for last place(that is to place on the house H5)
//		If (check_for ls == 255 && cs == 0 && rs == 255)  then break
	whiteLine();
		Move soft right;
		if (check_for ls == 255 && cs == 0 && rs == 255) { break; }
	}
	bot_direction = left;
	whiteLine();
	forward_line_following;
Executing Pick and Place (source_node, distination_node, current_node) {
	go_to_distination_node(current_node, source_node);
	Pick;
	go_to_distination_node(source_node, distination_node);
	if (distination_node == last_node) {
			Move soft left();
			if (check_for ls == 255 && cs == 0 && rs == 255) { break; }
		}
	}
	Place;
	if (distination_node == last_node) {
		whiteLine 180 degree turn ;
	}
	STOP;