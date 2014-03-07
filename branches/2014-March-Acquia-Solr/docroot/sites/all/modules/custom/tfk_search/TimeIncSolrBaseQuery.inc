<?php

/**
 * Provides enhancements to the contrib SolrBaseQuery class.
 * 
 * @author rallen
 *
 */

class TimeIncSolrBaseQuery extends SolrBaseQuery {
  
  /**
   * Return the base_path property.
   * 
   * This property is protected in SolrBaseQuery, and there isn't
   * a public method to retrieve it, so we made our own.
   */
  function get_base_path() {
    return $this->base_path;
  }
}
