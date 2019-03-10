<?php

function stract($value='')
{
	$i = $j = 0;
	$s = "hushun";
	$t = "xu";
	while ($i < strlen($s)) {
		$i++;
	}
	// var_dump($s);
	// var_dump($i);
	// die;

	// 
	while ($j < strlen($t)) {
		$j++;
	}

	while (($s[$i++] = $t[$j++])) {
		# code...
	}
	var_dump($j);
	die;
	var_dump($s[$i]);
	var_dump($t[$j]);
}

stract();