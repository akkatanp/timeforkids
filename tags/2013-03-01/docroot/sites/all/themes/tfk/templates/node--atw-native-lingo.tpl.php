<?php
/**
 * @file
 * Zen theme's implementation to display a node.
 *
 * Available variables:
 * - $title: the (sanitized) title of the node.
 * - $content: An array of node items. Use render($content) to print them all,
 *   or print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $user_picture: The node author's picture from user-picture.tpl.php.
 * - $date: Formatted creation date. Preprocess functions can reformat it by
 *   calling format_date() with the desired parameters on the $created variable.
 * - $name: Themed username of node author output from theme_username().
 * - $node_url: Direct url of the current node.
 * - $display_submitted: Whether submission information should be displayed.
 * - $submitted: Submission information created from $name and $date during
 *   template_preprocess_node().
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. The default values can be one or more of the
 *   following:
 *   - node: The current template type, i.e., "theming hook".
 *   - node-[type]: The current node type. For example, if the node is a
 *     "Blog entry" it would result in "node-blog". Note that the machine
 *     name will often be in a short form of the human readable label.
 *   - node-teaser: Nodes in teaser form.
 *   - node-preview: Nodes in preview mode.
 *   - view-mode-[mode]: The view mode, e.g. 'full', 'teaser'...
 *   The following are controlled through the node publishing options.
 *   - node-promoted: Nodes promoted to the front page.
 *   - node-sticky: Nodes ordered above other non-sticky nodes in teaser
 *     listings.
 *   - node-unpublished: Unpublished nodes visible only to administrators.
 *   The following applies only to viewers who are registered users:
 *   - node-by-viewer: Node is authored by the user currently viewing the page.
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 *
 * Other variables:
 * - $node: Full node object. Contains data that may not be safe.
 * - $type: Node type, i.e. story, page, blog, etc.
 * - $comment_count: Number of comments attached to the node.
 * - $uid: User ID of the node author.
 * - $created: Time the node was published formatted in Unix timestamp.
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 * - $zebra: Outputs either "even" or "odd". Useful for zebra striping in
 *   teaser listings.
 * - $id: Position of the node. Increments each time it's output.
 *
 * Node status variables:
 * - $view_mode: View mode, e.g. 'full', 'teaser'...
 * - $teaser: Flag for the teaser state (shortcut for $view_mode == 'teaser').
 * - $page: Flag for the full page state.
 * - $promote: Flag for front page promotion state.
 * - $sticky: Flags for sticky post setting.
 * - $status: Flag for published status.
 * - $comment: State of comment settings for the node.
 * - $readmore: Flags true if the teaser content of the node cannot hold the
 *   main body content. Currently broken; see http://drupal.org/node/823380
 * - $is_front: Flags true when presented in the front page.
 * - $logged_in: Flags true when the current user is a logged-in member.
 * - $is_admin: Flags true when the current user is an administrator.
 *
 * Field variables: for each field instance attached to the node a corresponding
 * variable is defined, e.g. $node->body becomes $body. When needing to access
 * a field's raw values, developers/themers are strongly encouraged to use these
 * variables. Otherwise they will have to explicitly specify the desired field
 * language, e.g. $node->body['en'], thus overriding any language negotiation
 * rule that was previously applied.
 *
 * @see template_preprocess()
 * @see template_preprocess_node()
 * @see zen_preprocess_node()
 * @see template_process()
 */
$speaker_photo = field_get_items('node', $node, 'field_speaker_photo');
$speaker_photo = file_create_url(image_style_path('tfk_rect_large',$speaker_photo[0]['uri']));
?>
<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>

  <?php print $user_picture; ?>

  <?php print render($title_prefix); ?>
  <?php if (!$page && $title): ?>
    <h2><?php print $title_attributes; ?>><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h2>
  <?php endif; ?>
  <?php print render($title_suffix); ?>

  <?php if ($unpublished): ?>
    <div class="unpublished"><?php print t('Unpublished'); ?></div>
  <?php endif; ?>

  <?php if ($display_submitted): ?>
    <div class="submitted">
      <?php print $submitted; ?>
    </div>
  <?php endif; ?>

  <div class="content" <?php print $content_attributes; ?>>
    <?php
      // We hide the comments and links now so that we can render them later.
      hide($content['comments']);
      hide($content['links']);
        ?>
	
	<link rel="stylesheet" href="/sites/all/themes/tfk/css/atw-native-lingo.css" />
	<script src="/sites/all/themes/tfk/js/jplayer/jquery.jplayer.min.js"></script>
	<script src="/sites/all/themes/tfk/js/atw-native-lingo.js"></script>
	
	<div class="atw-graphic-header"></div>
	
	<div id="native-lingo-container">
		<h1><?php echo $title; ?>: Native Lingo</h1>
		<?php print render($content['body']); ?>
		
		<div id="image-container">
			<img src="<?php echo $speaker_photo; ?>" />
			
			<div id="audio-box">
				<h2>I'm Speaking <?php echo $title; ?>!</h2>
				<div id="phrase-text"></div>
				<div id="phrase-translation"></div>
				<div id="audio-player-box">
					<div id="audio-player"></div>
					<a href="#" id="jplayer_play" class="jp-play"></a>
					<a href="#" id="jplayer_pause" class="jp-pause"></a>
					<a href="#" id="jplayer_stop" class="jp-stop"></a>
					Hear it spoken
				</div>
			</div>
		</div>
		
		<h1>How Do I Say?</h1>
		
		<?php if(count($lingo_phrases['basic']) > 0):?>
		<div id="basics" class="phrase-list">
			<h2>The Basics</h2>
			<?php $i = 0; ?>
			<?php foreach($lingo_phrases['basic'] as $phrase):?>
			<div class="phrase<?=($i++%2==1) ? ' odd' : ' even' ?>">
				<a href="<?php print $phrase['url_to_audio'];?>" class="audio-link" rel="<?php print $phrase['phrase_translation'];?>"><?php print $phrase['phrase_text'];?></a>
				<!-- <?php print $phrase['phrase_filemime'];?> -->
				<?php if($is_admin_editor):?>
				<br />
					<?php print l('edit','field-collection/field-native-lingo-phrase/'.$phrase['phrase_nid'].'/edit',array('attributes'=>array('class' => 'edit')));?> --
					<?php print l('delete','field-collection/field-native-lingo-phrase/'.$phrase['phrase_nid'].'/delete',array('attributes'=>array('class' => 'delete')));?>
				<?php endif; ?>				
			</div>
			<?php endforeach;?>
			
		</div>
		<?php endif;?>
		
		<?php if(count($lingo_phrases['next_level']) > 0):?>
		<div id="next-level" class="phrase-list">
			<h2>The Next Level</h2>
			<?php $i = 0; ?>
			<?php foreach($lingo_phrases['next_level'] as $phrase):?>
			<div class="phrase<?=($i++%2==1) ? ' odd' : ' even' ?>">
				<a href="<?php print $phrase['url_to_audio'];?>" class="audio-link" rel="<?php print $phrase['phrase_translation'];?>"><?php print $phrase['phrase_text'];?></a>
				<!-- <?php print $phrase['phrase_filemime'];?> -->
				<?php if($is_admin_editor):?>
				<br />
					<?php print '<a href="'.url('field-collection/field-native-lingo-phrase/'.$phrase['phrase_nid'].'/edit',array('query'=>array('destination' => $return_path))).'">[edit]</a>';?> --
					<?php print '<a href="'.url('field-collection/field-native-lingo-phrase/'.$phrase['phrase_nid'].'/delete',array('query'=>array('destination' => $return_path))).'">[delete]</a>';?>
				<?php endif; ?>				
			</div>
			<?php endforeach;?>
			
		</div>
		<?php endif;?>
		
		<div class="clearfix"></div>
	</div>
	<?php if($is_admin_editor):?>
	<?php print l('ADD NEW','field-collection/field-native-lingo-phrase/add/node/'.$node->nid, array('attributes'=>array('class' => 'add-new')));?>
	<?php endif; ?>
	<?php print render($content['links']); ?>

	<?php print render($content['comments']); ?>

</div></div><!-- /.node -->
