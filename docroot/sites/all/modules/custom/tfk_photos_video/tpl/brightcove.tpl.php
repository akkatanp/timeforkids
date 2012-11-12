<script src="http://admin.brightcove.com/js/BrightcoveExperiences.js" type="text/javascript"></script>
<script src="http://admin.brightcove.com/js/APIModules_all.js"></script>
<object id="myExperience" class="BrightcoveExperience">
  <param name="bgcolor" value="#FFFFFF" />
  <param name="width" value="480" />
  <param name="height" value="350" />
  <param name="playerID" value="<?php print $variables['player_id']; ?>" />
  <param name="videoID" value="<?php print $variables['video_id']; ?>" />
  <param name="isVid" value="true" />
  <param name="optimizedContentLoad" value="true" />
  <param name="externalAds" value="false" />
  <param name="continuousPlay" value="false" />
  <param name="autoStart" value="false" />
  <param name="allowScriptAccess" value="always" />
</object>
<script type="text/javascript">brightcove.createExperiences();</script>
