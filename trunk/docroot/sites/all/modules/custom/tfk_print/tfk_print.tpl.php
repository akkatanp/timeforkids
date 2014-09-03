<?php
/**
 *   ~ tfk_print.tpl.php ~
 *   The view tpl for the tfk_print module.
 *   Variables are loaded from tfk_print.module.
 */
?>
<!doctype html>
<html>
    <meta charset="utf-8">
    <title><?=$title?> | TIME For Kids</title>
    <link rel="stylesheet" type="text/css" href="/<?=drupal_get_path('module', 'tfk_print') .'/css/style.css';?>">
<head>
</head>
<body>
    <div id = "wrapper">
    
        <!-- Logo -->
        <a id = "logo" href = "/">
            <img src = "/<?=drupal_get_path('module', 'tfk_print') .'/img/tfk-logo.png';?>" alt="TIME For Kids">
        </a>
    
        <!-- Headline & Deck -->
        <h1><?=$title?></h1>
        <h2><?=$deck?></h2>
        <div id = "byline"><span class = "date"><?=$date?></span> | <span class = "author"><?=$byline?></span></div>
        
        <!-- Body -->
        <div id = "body" class = "cf">       
            <?=$photo?><?=$body?>
        </div>

        <!-- Footer -->
        <div id = "footer">
            <?=$backlink?>
        </div>
    
    </div>
</body>
</html>