<?php

$pages = Array(
	'name' => "Keypad",
	'type' => "input",
	'page' => "plugin_setup.php");

?>

<li><a href="<?php echo preg_replace('/.*\/plugins\/(.*)/', 'plugin.php?plugin=$1&page=plugin_setup.php', dirname(__FILE__)); ?>">Keypad</a></li>
