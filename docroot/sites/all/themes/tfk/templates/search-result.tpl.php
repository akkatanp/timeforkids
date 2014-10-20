<?php
// $Id: search-result.tpl.php,v 1.9 2010/11/21 20:36:36 dries Exp $

/**
 * @file
 * Default theme implementation for displaying a single search result.
 *
 * This template renders a single search result and is collected into
 * search-results.tpl.php. This and the parent template are
 * dependent to one another sharing the markup for definition lists.
 *
 * Available variables:
 * - $url: URL of the result.
 * - $title: Title of the result.
 * - $snippet: A small preview of the result. Does not apply to user searches.
 * - $info: String of all the meta information ready for print. Does not apply
 *   to user searches.
 * - $info_split: Contains same data as $info, split into a keyed array.
 * - $module: The machine-readable name of the module (tab) being searched, such
 *   as "node" or "user".
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 *
 * Default keys within $info_split:
 * - $info_split['type']: Node type (or item type string supplied by module).
 * - $info_split['user']: Author of the node linked to users profile. Depends
 *   on permission.
 * - $info_split['date']: Last update of the node. Short formatted.
 * - $info_split['comment']: Number of comments output as "% comments", %
 *   being the count. Depends on comment.module.
 * - $info_split['upload']: Number of attachments output as "% attachments", %
 *   being the count. Depends on upload.module.
 *
 * Other variables:
 * - $classes_array: Array of HTML class attribute values. It is flattened
 *   into a string within the variable $classes.
 * - $title_attributes_array: Array of HTML attributes for the title. It is
 *   flattened into a string within the variable $title_attributes.
 * - $content_attributes_array: Array of HTML attributes for the content. It is
 *   flattened into a string within the variable $content_attributes.
 *
 * Since $info_split is keyed, a direct print of the item is possible.
 * This array does not apply to user searches so it is recommended to check
 * for its existence before printing. The default keys of 'type', 'user' and
 * 'date' always exist for node searches. Modules may provide other data.
 * @code
 *   <?php if (isset($info_split['comment'])) : ?>
 *     <span class="info-comment">
 *       <?php print $info_split['comment']; ?>
 *     </span>
 *   <?php endif; ?>
 * @endcode
 *
 * To check for all available data within $info_split, use the code below.
 * @code
 *   <?php print '<pre>'. check_plain(print_r($info_split, 1)) .'</pre>'; ?>
 * @endcode
 *
 * @see template_preprocess()
 * @see template_preprocess_search_result()
 * @see template_process()
 */
//flog_it("search-result.tpl.php: render=".$render);
?>
<?php if(isset($tfk_search_cont_type) && ($tfk_search_cont_type == "TFK PRODUCT" || $tfk_search_cont_type == "TFK BOOK")) {
        $tfk_product = 'tfk_product';
    }
    else {
        $tfk_product = '';
    }
?>
<?php if(isset($render) && $render): ?>
<li class="<?php if(isset($classes)): ?><?php print "$classes $tfk_product"; ?><? endif; ?>"<?php if(isset($attributes)): ?><?php print $attributes; ?><? endif; ?>>
  <?php if($admin_links):?>
    <?php print $admin_links;?>
  <?php endif;?>

  <?php if(isset($tfk_search_res_skills)):?>
    <!-- SKills Vocab Term : <?php print $tfk_search_res_skills;?> --><br/>
  <?php endif;?>
  
  <?php if(isset($tfk_search_cont_type)):?>
    <?php if($tfk_search_cont_type == "TFK PRODUCT" || $tfk_search_cont_type == "TFK BOOK"):?>
      <div class="content-type <?php print $tfk_product;?>">
    <?php else:?>  
      <div class="content-type">
    <?php endif;?>
    <?php 
        /* TFK-207 */
            if( $tfk_search_cont_type == "MINISITE" ):
                $tfk_search_cont_type = "MINI-SITE";
            else:
                $tfk_search_cont_type = $tfk_search_cont_type;
            endif;
        
            if(isset($tfk_search_cont_type_suffix)): ?>
    		<span class="ctype-suffix"><?php print $tfk_search_cont_type_suffix; ?></span>
                <?php if($lock_bar == 1): ?>
                    <span class="ctype lock-bar">
                <?php else: ?>
                    <span class="ctype">    
                <?php endif; ?>
                    <?php print $tfk_search_cont_type; ?></span>
    	<?php else: ?>
    		
                <?php
                    if($article_magazine == 1):
                        if($lock_bar == 1):
                        ?>
                            <span class="lock-bar">
                        <?php
                            print "MAGAZINE ".$tfk_search_cont_type;
                        ?>
                            </span>
                        <?php
                        else:
                            print "MAGAZINE ".$tfk_search_cont_type;
                        endif;
                    elseif( $video_flag == 1 || $slideshow_flag == 1 ):
                        if($lock_bar == 1):
                        ?>
                            <span class="lock-bar">
                        <?php
                            print "SUBSCRIBER-ONLY ".$tfk_search_cont_type;
                        ?>
                            </span>
                        <?php
                        else:
                            print $tfk_search_cont_type;
                        endif;
                    else:
                        if($lock_bar == 1):
                        ?>
                        <span class="lock-bar">
                        <?php
                            print $tfk_search_cont_type;
                        ?>
                        </span>       
                        <?php
                        else:
                            print $tfk_search_cont_type;
                        endif;
                    endif;
                ?>
                
    	<?php endif; ?>
    </div>
  <?php endif;
        /* TFK-207 end */
  ?>
  
  <div class='row2'>
 
    <?php if(isset($thumbnail)):?>
    	<div class='col1'>
    	  <?php print $thumbnail; ?>
    	</div>
    <?php endif;?>
   
  	<div class='col2'>
      <?php if(isset($tfk_search_res_grade_level)):?>
        Grade Level:<?php print $tfk_search_res_grade_level;?>
      <?php endif;?>
    
      <h3 class="title"<?php print $title_attributes; ?>>
        <?php if(!empty($title_prefix)): ?>
        	<?php print render($title_prefix); ?>
        <?php endif; ?>
        <?php print $title; ?>
        <?php if(!empty($title_suffix)): ?>
        	<?php print render($title_suffix); ?>
        <?php endif; ?>
      </h3>
      
      <?php if(isset($date) && $tfk_product==''):?>
        <div class="result-date"><?php print $date; ?></div>
      <?php endif;?>
        
      <?php if(isset($tfk_search_kid_age) && $tfk_search_kid_age !=''):?>
        <div class="kid-reporter-age"><span>Age: </span><?php print $tfk_search_kid_age; ?></div>
      <?php endif; ?>
        
      <?php if(isset($tfk_search_kid_loc) && $tfk_search_kid_loc !=''):?>
        <div class="kid-reporter-loc"><?php print $tfk_search_kid_loc; ?></div><br>
      <?php endif; ?>
        
      <?php if(!empty($node_link)):?>
        <div class="view-full-article"><?php print $node_link; ?></div>
      <?php endif;?>
      
      <?php print render($title_suffix); ?>
      <div class="search-snippet-info">
        <div class="search-snippet-body">
          <?php if (isset($snippet)) : ?>
            <p class="search-snippet"<?php if(isset($content_attributes)): ?><?php print $content_attributes; ?><? endif; ?>><?php print $snippet; ?></p>
          <?php endif; ?>
        </div>
        
        <div class="search-result-links">
          <?php if(isset($tfk_search_result_link_1)): ?>
          	<span class="search-result-link-1 <?php if(isset($cont_type_class)): ?><?php print $cont_type_class; ?><? endif; ?>"><?php print $tfk_search_result_link_1; ?></span>
          <?php endif; ?>
          
          <?php if(isset($tfk_search_result_link_2)): ?>
          	<span class="search-result-link-2 <?php if(isset($cont_type_class)): ?><?php print $cont_type_class; ?><? endif; ?>"><?php print $tfk_search_result_link_2; ?></span>
          <?php endif; ?>
          
          <?php if(isset($tfk_worksheet_pdf_link)): ?>
          	<span class="search-result-download-link <?php if(isset($cont_type_class)): ?><?php print $cont_type_class; ?><? endif; ?>"><?php print $tfk_worksheet_pdf_link; ?></span>
          <?php endif; ?>
          
          <?php if(isset($tfk_pdf_link)): ?>
          	<span class="search-result-download-link <?php if(isset($cont_type_class)): ?><?php print $cont_type_class; ?><? endif; ?>"><?php print $tfk_pdf_link; ?></span>
          <?php endif; ?>
          
          <?php if(isset($favorites_flag_link)): ?>
          	<?php print $favorites_flag_link; ?>
          <?php endif; ?>
        </div>
          
      </div>
      
      <?php if(isset($related_content)):?>
        <?php print $related_content; ?>
      <?php endif;?>
    </div>
  </div>
  
</li>
<?php endif; ?>
