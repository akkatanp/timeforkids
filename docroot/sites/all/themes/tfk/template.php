<?php
	function tfk_preprocess_block(&$variables) {
		$block = $variables['block'];
		
		if($block->module == 'views' && $block->delta == 'destinations-block_1') {
	
			$number = db_query("select count(*) from {node} where type='destination'")->fetchField();
			$block->subject = t("Destinations (%number)", array('%number' => $number));			
		}
	}
?>